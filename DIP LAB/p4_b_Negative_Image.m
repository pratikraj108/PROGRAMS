%WAP to Find Negative Image of Gray Scale Image
clc;
clear;
close all;
a = imread('mohit.jpeg');
a = rgb2gray(a);
[r,c] = size(a);
result = zeros(r,c,'uint8');
for i = 1:1:r
    for j = 1:1:c
        result(i,j) = 255 - a(i,j);
    end
end
figure;
subplot(1,2,1);
imshow(a);
title('Original Gray Image');
subplot(1,2,2);
imshow(result);
title('Negative Image');
