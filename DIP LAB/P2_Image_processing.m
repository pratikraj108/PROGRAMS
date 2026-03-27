% Matlab Program
% UK notebook
% Save with x.m

close all;
clear all;
clc;

% Read Image
Im = imread('payas.jpeg');     % put your file name here
figure(1)
imshow(Im)
title('Original Image');

% Color channel of RGB image
figure(2)
subplot(3,2,1)
imshow(Im)
title('RGB Image');

Im_R = Im(:,:,1);
subplot(3,2,2)
imshow(Im_R)
title('Red channel');

Im_G = Im(:,:,2);
subplot(3,2,3)
imshow(Im_G)
title('Green channel');

Im_B = Im(:,:,3);
subplot(3,2,4)
imshow(Im_B)
title('Blue channel');

% Convert RGB to Gray
Im_Gray = rgb2gray(Im);
subplot(3,2,5)
imshow(Im_Gray)
title('Gray Image');
