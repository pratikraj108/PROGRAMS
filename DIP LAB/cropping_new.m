clc;
clear;
close all;

% Read image
img = imread('Profile.JPG');

% Show original image
figure
subplot(1,2,1)
imshow(img)
title('Original Image')

% ---- Cropping coordinates ----
x = 400;   % starting column
y = 300;    % starting row
w = 400;   % width
h = 200;   % height

% Crop using logical indexing
crop_part = img(y:y+h-1 , x:x+w-1 , :);

% Show cropped image
subplot(1,2,2)
imshow(crop_part)
title('Cropped Image')