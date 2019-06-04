# Panorama-Image-Stitcher-Using-Computer-Vision
In this project, I implement a panorama image stitcher. This requires the implementation of a Harris corner detector, RANSAC alignment and an image stitcher.
## HarrisCornerDetector Result
![1a](https://user-images.githubusercontent.com/36937088/58906279-6b16a600-86c0-11e9-83c4-5d2d547d376c.png)
![1c](https://user-images.githubusercontent.com/36937088/58906482-d496b480-86c0-11e9-9122-222f699ec55b.png)
## Keypoint Matching Result
![2a](https://user-images.githubusercontent.com/36937088/58906329-8c779200-86c0-11e9-9aa5-fa5d9acf2cc1.png)
## Compute the homography between the images using RANSAC
![3a](https://user-images.githubusercontent.com/36937088/58906389-a3b67f80-86c0-11e9-97a3-8557e3b4b2ad.png)
<br> We can know that two separable first derivative have the same function as the second derivative. 
## Stitch the images together using the computed homography (BilinearInterpolation and Stich).
![AllStitched](https://user-images.githubusercontent.com/36937088/58906520-e9734800-86c0-11e9-8f5e-ef9aa522bba7.png)
