#include <SDL2/SDL.h>
#include <stdbool.h>

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480
#define HEART_WIDTH 200
#define HEART_HEIGHT 200
#define HEART_X 250
#define HEART_Y 200
#define BLINK_INTERVAL 500 // Milliseconds

void drawHeart(SDL_Renderer* renderer, int x, int y, int width, int height) {
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Màu đỏ
    SDL_RenderDrawLine(renderer, x, y + height / 2, x + width / 2, y);
    SDL_RenderDrawLine(renderer, x + width / 2, y, x + width, y + height / 2);
    SDL_RenderDrawLine(renderer, x, y + height / 2, x + width / 2, y + height);
    SDL_RenderDrawLine(renderer, x + width / 2, y + height, x + width, y + height / 2);
    SDL_RenderPresent(renderer);
}

void blinkHeart(SDL_Renderer* renderer) {
    static bool blink = true;
    if (blink) {
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Màu đen
    } else {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Màu đỏ
    }
    SDL_RenderClear(renderer);
    blink = !blink;
    drawHeart(renderer, HEART_X, HEART_Y, HEART_WIDTH, HEART_HEIGHT);
    SDL_RenderPresent(renderer);
}

int main(int argc, char* argv[]) {
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool quit = false;
    SDL_Event e;
    Uint32 blinkTimer = 0;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    } else {
        window = SDL_CreateWindow("Blinking Heart",
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SDL_WINDOWPOS_UNDEFINED,
                                  SCREEN_WIDTH,
                                  SCREEN_HEIGHT,
                                  SDL_WINDOW_SHOWN);

        if (window == NULL) {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        } else {
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderClear(renderer);

            drawHeart(renderer, HEART_X, HEART_Y, HEART_WIDTH, HEART_HEIGHT);

            while (!quit) {
                while (SDL_PollEvent(&e) != 0) {
                    if (e.type == SDL_QUIT) {
                        quit = true;
                    }
                }

                Uint32 currentTicks = SDL_GetTicks();
                if (currentTicks - blinkTimer >= BLINK_INTERVAL) {
                    blinkHeart(renderer);
                    blinkTimer = currentTicks;
                }
            }

            SDL_DestroyRenderer(renderer);
            SDL_DestroyWindow(window);
            SDL_Quit();
        }
    }

    return 0;
}
