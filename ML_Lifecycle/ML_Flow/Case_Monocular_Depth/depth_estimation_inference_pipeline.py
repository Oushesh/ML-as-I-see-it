##Reference: https://pytorch.org/hub/intelisl_midas_v2/
import cv2
import torch
import urllib.request

model_type = "DPT_Large"

midas = torch.hub.load("intel-isl/MiDaS", model_type)


device = torch.device("cuda") if torch.cuda.is_available() else torch.device("cpu")
print ('device',device)
midas.to(device)
midas.eval()

midas_transforms = torch.hub.load("intel-isl/MiDaS", "transforms")

if model_type == "DPT_Large" or model_type == "DPT_Hybrid":
    transform = midas_transforms.dpt_transform
else:
    transform = midas_transforms.small_transform


img = cv2.imread(filename)
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)

input_batch = transform(img).to(device)


with torch.no_grad():
    prediction = midas(input_batch)

    prediction = torch.nn.functional.interpolate(
        prediction.unsqueeze(1),
        size=img.shape[:2],
        mode="bicubic",
        align_corners=False,
    ).squeeze()

output = prediction.cpu().numpy()


cv2.imwrite('output.png',output)


def single_image_inference():
    return depth
if __name__ == "__main__":
    inference()
