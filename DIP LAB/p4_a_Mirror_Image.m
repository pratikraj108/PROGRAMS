% WAP to Generate Mirror Image of Gray Scale Image
clc;
clear;
close all;
a = imread('mohit.jpeg');
a = rgb2gray(a);
[r,c] = size(a);
result = zeros(r,c,'uint8');
for i = 1:1:r
    k = 1;
    for j = c:-1:1
        result(i,k) = a(i,j);
        k = k + 1;
    end
end
figure;
subplot(1,2,1);
imshow(a);
title('Original Gray Image');
subplot(1,2,2);
imshow(result);
title('Mirror Image');
