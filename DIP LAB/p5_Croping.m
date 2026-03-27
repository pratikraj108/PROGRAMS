% WAP to show Cropping of Image in MATLAB

img = imread('manoj.jpeg');
cropped = imcrop(img, [300 100 800 800]);

figure;

subplot(1, 2, 1);
imshow(img, 'InitialMagnification', 'fit');
title(sprintf('Original Image\n%d x %d pixels', size(img,1), size(img,2)));

subplot(1, 2, 2);
imshow(cropped, 'InitialMagnification', 'fit');
title(sprintf('Cropped Image\n%d x %d pixels', size(cropped,1), size(cropped,2)));