# Road Sign Detection

## 1. Dataset overview

The dataset used in this project is the [German Traffic Sign Recognition Benchmark (GTSRB)](https://benchmark.ini.rub.de/?section=gtsrb&subsection=dataset). It contains 43 classes of traffic signs and consists of 39,209 training images and 12,630 test images. The images are photos of traffic signs in different sizes, lighting conditions, and occlusion settings. The dataset is available in the [Kaggle](https://www.kaggle.com/meowmeowmeowmeowmeow/gtsrb-german-traffic-sign) and [TensorFlow](https://www.tensorflow.org/datasets/catalog/gtsrb_signs) datasets.

[Link](https://drive.google.com/drive/folders/1I1ZyNzJraPi4mqyztONCxfAPOq7M_9Bk?usp=sharing)

## 2. Dataset structure

The training set archive is structured as follows:
- One directory per class.
- Each directory contains one Comma Separated Value (CSV) file with
- annotations ( GT-\<ClassID\>.csv ), as well as the training images.
- Training images are grouped by tracks.
- Each track contains 30 images of one single physical traffic sign.

## 3.Image format

The image format is structured as follows:
- The images contain one traffic sign each.
- Images contain a border of 10 % around the actual traffic sign (at least 5 pixels) to allow for edge-based approaches.
- Images are stored in PPM format – Portable, Pixmap, and [P6](http:/​/en.wikipedia.​org/wiki/Netpbm_​format).
- Image sizes vary between 15 x 15 and 250 x 250 pixels.
- Images are not necessarily squared.
- The actual traffic sign is not necessarily centered within the image. This is true for images that were close to the image border in the full camera image.
- The bounding box of the traffic sign is a part of the annotations, which we will see in the following section.

