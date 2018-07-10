#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

void display_checker_board(SDL_Renderer *renderer)
{
    /* TODO */
}

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    int status = EXIT_FAILURE;

    if(0 != SDL_Init(SDL_INIT_VIDEO))
        fprintf(stderr, "Erreur SDL_Init : %s", SDL_GetError());
    else 
    {
        SDL_Window *window = SDL_CreateWindow("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                              640, 480, SDL_WINDOW_SHOWN);
        if(NULL == window)
            fprintf(stderr, "Erreur SDL_CreateWindow : %s", SDL_GetError());
        else
        {
            SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            if(NULL == renderer)
                fprintf(stderr, "Erreur SDL_CreateRenderer : %s", SDL_GetError());
            else 
            {
                statut = EXIT_SUCCESS;
                run(renderer);
                SDL_Delay(3000);
                SDL_DestroyRenderer(renderer);
            }
            SDL_DestroyWindow(window);
        }
        SDL_Quit();
    }
    return status;
}
