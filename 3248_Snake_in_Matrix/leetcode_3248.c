int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int loc_i=0, loc_j=0;
    for(int i=0;i<commandsSize;i++)
    {
        switch(commands[i][0])
        {
            case 'U':
                loc_i--;
                break;
            case 'R':
                loc_j++;
                break;
            case 'D':
                loc_i++;
                break;
            case 'L':
                loc_j--;
                break;
            default:
                break;
        }
    }
    return ((loc_i*n)+loc_j);
}