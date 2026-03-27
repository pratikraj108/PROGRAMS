clc;
clear;
close all;

% Read image
img = imread('prakhar.jpeg');

% Zoom factor
zoom_factor = 2;

% Get image size
[m,n,c] = size(img);

% Create zoomed image
zoom_img = zeros(m*zoom_factor, n*zoom_factor, c, 'uint8');

for i = 1:m
    for j = 1:n
        for k = 1:zoom_factor
            for l = 1:zoom_factor
                zoom_img((i-1)*zoom_factor+k,(j-1)*zoom_factor+l,:) = img(i,j,:);
            end
        end
    end
end

% Display images together
figure;

subplot(1,2,1)
imshow(img)
title('Original Image')

subplot(1,2,2)
imshow(zoom_img)
title('Zoomed Image (Factor 2)')