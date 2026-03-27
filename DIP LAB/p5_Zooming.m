% WAP to show Zooming of specific region in MATLAB

img = imread('manoj.jpeg');

x = 50;       
y = 50;       
width = 500;  
height = 500;

region = img(y:y+height, x:x+width);

zoom_in = imresize(region, 2);

figure;

subplot(1, 2, 1);
imshow(img, 'InitialMagnification', 'fit');
title(sprintf('Original Image\n%d x %d pixels', size(img,1), size(img,2)));

subplot(1, 2, 2);
imshow(zoom_in, 'InitialMagnification', 'fit');
title(sprintf('Zoomed Region (2x)\nx=%d y=%d w=%d h=%d', x, y, width, height));