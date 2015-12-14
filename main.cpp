# include "ImageFeatureExtraction.h"

int main(int argc, char *argv[])
{
    QString imageFilePath = "/home/virgil/workspace/qt/IFE/Images/cat.gif";

    //Get the path to the file, if given as argument
    if (argc > 1) {
        imageFilePath = argv[1];
    }

    ImageFeatureExtraction imf(imageFilePath);
    //imf.calculateGlobalColorHistogram();
    //imf.printGlobalColorHistogram();

    imf.calculateLocalColorHistogram();
    imf.printLocalColorHistogram();

    return 0;
}