#include "SDL.h"
#include "graphics.h"

Graphics::Graphics(const char* title, int width, int height, int window_flags) {
    _window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height,SDL_WINDOW_SHOWN | window_flags);
    _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_SetWindowTitle(_window, title);

}
Graphics::~Graphics() {
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
}

void Graphics::resetRenderer() {
    SDL_SetRenderDrawColor(_renderer, 255, 255, 255, 255);
    SDL_RenderClear(_renderer);
}

SDL_Texture *Graphics::getTexture(const std::string &file) {
    if(_textureAssets.count(file) == 0)
    {
        //Texture hasn't been created for this asset, so create it.
        SDL_Texture *texture = nullptr;
        SDL_Surface *loadedImage = SDL_LoadBMP(file.c_str());
        texture = SDL_CreateTextureFromSurface(_renderer, loadedImage);
        SDL_FreeSurface(loadedImage);
        _textureAssets[file] = texture;
    }
    return _textureAssets[file];
}

void Graphics::renderTexture(SDL_Texture *texture, int x, int y, double scaleX, double scaleY) {
    SDL_Rect destination;
    destination.x = x;
    destination.y = y;
    SDL_QueryTexture(texture, nullptr, nullptr, &destination.w, &destination.h);

    destination.w = (double) destination.w * scaleX;
    destination.h = (double) destination.h * scaleY;

    SDL_RenderCopy(_renderer, texture, nullptr, &destination);
}

void Graphics::Present() {
    SDL_RenderPresent(_renderer);
}
