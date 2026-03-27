clc;
clear;
close all;

% Read input image
img = imread('mohit.jpeg'); 
figure('Name','Image Operations');
% (a) Gray Scale Image
gray_img = rgb2gray(img);

subplot(4,2,1);
imshow(gray_img);
title('Gray Image');

subplot(4,2,2);
imhist(gray_img);
title('Histogram of Gray Image');

% (b) Image Addition
add_img = imadd(gray_img, 50);

subplot(4,2,3);
imshow(add_img);
title('Image Addition');

subplot(4,2,4);
imhist(add_img);
title('Histogram of Image Addition');

% (c) Image Subtraction
sub_img = imsubtract(gray_img, 50);

subplot(4,2,5);
imshow(sub_img);
title('Image Subtraction');

subplot(4,2,6);
imhist(sub_img);
title('Histogram of Image Subtraction');

% (d) Image Complement
comp_img = imcomplement(gray_img);

subplot(4,2,7);
imshow(comp_img);
title('Image Complement');

subplot(4,2,8);
imhist(comp_img);
title('Histogram of Image Complement');
