import rembg
import numpy as np
from PIL import Image
input_image = Image.open('input_image.jpg');
input_array = np.array(input_image)
output_array = rembg.remove(input_array)
output_image = Image.fromarray(output_array)
output_image.save('output_image.jpg')

