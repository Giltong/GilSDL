

#ifndef GRAPHICS_H
#define GRAPHICS_H
struct SDL_Renderer;
struct SDL_Window;

class Graphics {
private:
    SDL_Renderer* _renderer{};
    SDL_Window* _window{};
public:
    Graphics(int width, int height, int window_flags);
    ~Graphics();
};


#endif //GRAPHICS_H
