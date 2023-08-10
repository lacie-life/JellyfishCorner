# Semantic Segmentation
===

There is a dataset of labeled images in **dataset**.
Optionally you can build your own dataset or augment the current dataset using **01_synchronous_mode_recording.py**, which can run as a client for Carla secording automatically in RGB, raw semantic segmentation and colored semantic segmentation.
There is also a test dataset in **dataset_test**.
There are some examples of output:
- **dataset_good**: example from the network we are building
- **dataset_bad**: example from a network that has not been trained well 

In addition:
- **02_fc_densenet.py** will train the neural network; please adjust the parameters (size, batch size, groups) according to yout hardware capabilities
- **03_inference.py** will process the test dataset, saving the results in **dataset_out**

## Common semantic segmentation architectures

### U-Net

![U-Net](https://lmb.informatik.uni-freiburg.de/people/ronneber/u-net/u-net-architecture.png)

### SegNet

![SegNet](https://github.com/kulkarnikeerti/SegNet-Semantic-Segmentation/blob/master/SegNet.JPG?raw=true)

- <b> Encoder: </b> Convolutions and max-pooling are performed in the encoder, where 13 convolutional layers are taken from VGG-16. The corresponding max-pooling indices are stored while performing 2×2 max-pooling.

- <b> Decoder: </b> Upsampling and convolutions are conducted in the decoder's softmax classifier, at the end of each pixel. The max-pooling indices at the corresponding encoder layer are recalled and upsampled during the upsampling process. Then, a K-class softmax classifier is used for predicting each pixel.

### PSPNet

![PSPNet](https://images.viblo.asia/0d2fc12c-a23a-4c68-a8f5-8762e48836e7.png)

### DeepLabv3+

![DeepLabv3+](https://hasty.ai/media/pages/docs/mp-wiki/model-architectures/deeplabv3/74a602d54d-1684142763/image-48.webp)


- <b>Encoder: </b>In the encoder step, essential information from the input image is extracted using a pre-trained convolutional neural network. The essential information for segmentation tasks is the objects present in the image and their locations.
- <b>Decoder: </b>The information that's extracted from the encoder process is used to create an output that is the same as the original input image's size.

### E-Net

[Link](https://arxiv.org/pdf/1606.02147.pdf)

