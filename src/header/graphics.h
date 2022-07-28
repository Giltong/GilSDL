

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <string>
#include <map>

struct SDL_Renderer;
struct SDL_Window;
struct SDL_Texture;
class Graphics {
private:
    SDL_Renderer* _renderer{};
    SDL_Window* _window{};
    std::map<std::string, SDL_Texture*> _textureAssets;
public:
    Graphics(const char* title, int width, int height, int window_flags);
    ~Graphics();

    void resetRenderer();
    void renderTexture(SDL_Texture *texture, int x, int y, double scaleX = 1.0, double scaleY = 1.0);
    void Present();

    SDL_Texture* getTexture(const std::string &file);

};


#endif //GRAPHICS_H
