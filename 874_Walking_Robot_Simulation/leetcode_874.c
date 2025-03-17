int calculateDistance(int x, int y)
{
    // printf("%d---%d\n",x,y);
    return ((x*x)+(y*y));
}

bool checkObstacle(int x, int y, int** obstacles, int obstaclesSize)
{
    for(int i=0;i<obstaclesSize;i++)
    {
        // printf("%d++%d\n",x,y);
        if(y==obstacles[i][0] && x==obstacles[i][1])
        {
            // printf("%d//%d\n",x,y);
            return false;
        }
    }
    return true;
}

int robotSim(int* commands, int commandsSize, int** obstacles, int obstaclesSize, int* obstaclesColSize) {
    int x=0, y=0, direction=0, maxDistance=0, tempDistance=0;
    int temp_x,temp_y;
    for(int i=0;i<commandsSize;i++)
    {
        switch(commands[i])
        {
            case -1:
                if(direction == 3)
                {
                    direction = 0;
                }
                else
                {
                    direction++;
                }
                break;
            case -2:
                if(direction == 0)
                {
                    direction = 3;
                }
                else
                {
                    direction--;
                }
                break;
            default:
                temp_x = x;
                temp_y = y;
                for(int j=0;j<commands[i];j++)
                {
                    switch(direction)
                    {
                        case 0:
                            temp_x = temp_x+1;
                            break;
                        case 1:
                            temp_y = temp_y+1;
                            break;
                        case 2:
                            temp_x = temp_x-1;
                            break;
                        case 3:
                            temp_y = temp_y-1;
                            break;
                        default:
                            break;
                    }
                    if(checkObstacle(temp_x,temp_y,obstacles,obstaclesSize))
                    {
                        x = temp_x;
                        y = temp_y;
                    }
                    else
                        break;
                    tempDistance = calculateDistance(x,y);
                    maxDistance = (tempDistance>maxDistance)?tempDistance:maxDistance;
                }
                break;
        }
    }

    // tempDistance = calculateDistance(x,y);
    // maxDistance = (tempDistance>maxDistance)?tempDistance:maxDistance;
    return maxDistance;
}