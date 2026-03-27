% WAP to Generate Shrinking of Image
clc;
clear;
close all;
a = imread('mohit.jpeg');
a = rgb2gray(a);
[r,c] = size(a);
new_r = floor(r/2);
new_c = floor(c/2);
result = zeros(new_r,new_c,'uint8');
for i = 1:1:new_r
    for j = 1:1:new_c
        result(i,j) = a(2*i, 2*j);
    end
end
figure;
subplot(1,2,1);
imshow(a);
title('Original Gray Image');
subplot(1,2,2);
imshow(result);
title('Shrunken Image');
