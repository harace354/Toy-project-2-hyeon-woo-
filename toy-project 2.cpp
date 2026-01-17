#include <stdio.h>

int main()
{
    printf("이것은 당신이 매번 잃어버리는 필기구를 찾기 위한 프로그램입니다.\n");
    printf("연필은 1위치에, 지우개는 2위치에, 그리고 볼펜은 3위치에 있어야 합니다.\n");
    int pencil=1;
    int eraser=2;
    int ballpen =3;
    int after_pencil;
    scanf("%d",&after_pencil);
    int after_eraser;
    scanf("%d",&after_eraser);
    int after_ballpen;
    scanf("%d",&after_ballpen);
    if(pencil==after_pencil)
    {
        printf("연필이 제자리에 있습니다.\n");
    }
    if(eraser==after_eraser)
    {
        printf("지우개가 제자리에 있습니다.\n");
    }
    if(ballpen==after_ballpen)
    {
        printf("볼펜이 제자리에 있습니다.\n");
    }
    if(pencil==after_pencil && eraser==after_eraser && ballpen==after_ballpen)
    {
        printf("완벽합니다!!! 앞으로도 이렇게만 정리해주세요.");
    }
    if(after_pencil>30)
    {
        printf("연필이 방에 없습니다.\n");
    }
    else if(after_pencil<=30)
    {
        if (after_pencil>10)
        {
            printf("연필이 책상 위에 없습니다.\n");
            printf("%d위치에서 1위치로 이동시켜주세요.\n",after_pencil);

        }
        else if (pencil!=after_pencil)
        {
            printf("연필이 %d위치에 있습니다. 1위치로 이동시켜주세요.\n",after_pencil);
        }
    }
    if(after_eraser>30)
    {
        printf("지우개가 방에 없습니다.\n");
    }
    else if(after_eraser<=30)
    {
        if (after_eraser>10)
        {
            printf("지우개가 책상 위에 없습니다.\n");
            printf("%d위치에서 2위치로 이동시켜주세요.\n",after_eraser);

        }
        else if (eraser!=after_eraser)
        {
            printf("지우개가 %d위치에 있습니다. 2위치로 이동시켜주세요.\n",after_eraser);
        }
    }
    if(after_ballpen>30)
    {
        printf("볼펜이 방에 없습니다.\n");
    }
    else if(after_ballpen<=30)
    {
        if (after_ballpen>10)
        {
            printf("볼펜이 책상 위에 없습니다.\n");
            printf("%d위치에서 3위치로 이동시켜주세요.\n",after_ballpen);

        }
        else if (ballpen!=after_ballpen)
        {
            printf("볼펜이 %d위치에 있습니다. 3위치로 이동시켜주세요.\n",after_ballpen);
        }
    }
}
