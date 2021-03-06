#include "myFuncts.h"
#include "get_image.h"

bool initFuncts(char *_iniFile)
{
    if (ini_gets("RESOLUTION", "Width", "2592", buffIni, 5, iniFile))
    {
        IMAGE_WIDTH = atoi(buffIni);
    }
    else
    {
        puts("Can't set parameter Width");
        return false;
    }

    if (ini_gets("RESOLUTION", "Height", "1944", buffIni, 5, iniFile))
    {
        IMAGE_HEIGHT = atoi(buffIni);
    }
    else
    {
        puts("Can't set parameter Height");
        return false;
    }

    IMAGE_SIZE = IMAGE_WIDTH * IMAGE_HEIGHT * BufferType;
    /*
    printf("IMAGE_WIDTH= %d \r\n",IMAGE_WIDTH);
    printf("IMAGE_HEIGHT= %d \r\n",IMAGE_HEIGHT);
    printf("IMAGE_SIZE= %d \r\n",IMAGE_SIZE);
    printf("BufferType= %d \r\n",BufferType);
    */
    /*
    if (ini_gets("RESOLUTION", "Size", "10077696", buffIni, 10, iniFile))
    {
        IMAGE_SIZE = atoi(buffIni);
    }
    else
    {
        puts("Can't set parameter Size");
        return false;
    }*/

    return true;
}
