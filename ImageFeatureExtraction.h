//
// Created by virgil on 10.12.2015.
//

# ifndef IMAGE_FEATURE_EXTRACTION_H
# define IMAGE_FEATURE_EXTRACTION_H

# include <QImage>
# include <QColor>
# include <stdio.h>

# define NO_OF_BLOCKS 16
# define NO_OF_BINS 4
# define VALUES_PER_BIN 64

class ImageFeatureExtraction
{
private:
    QImage image;
    int width;
    int height;
    int globalColorHistogram[NO_OF_BINS][NO_OF_BINS][NO_OF_BINS];
    int localColorHistogramBins[NO_OF_BLOCKS][NO_OF_BINS][NO_OF_BINS][NO_OF_BINS];

    //Private functions
    /**
     * @brief initGlobalColorHistogram
     * This method initializes the globalColorHistogram
     */
    void initGlobalColorHistogram();

    /**
     * @brief initLocalColorHistogram
     * This method initializes the localColorHistogramBins
     */
    void initLocalColorHistogram();

public:
    /**
     * @brief ImageFeatureExtraction
     * This is the default constructor of an ImageFeatureExtraction object
     */
    ImageFeatureExtraction();

    /**
     * @brief ImageFeatureExtraction
     * This is the constructor that takes the path and loads the image at that path
     * @param filePath the path to the image
     */
    ImageFeatureExtraction(QString filePath);

    /**
     * @brief getImage
     * Get the loaded image
     * @return the loaded image
     */
    QImage getImage();

    /**
     * @brief setImage
     * Set a new image
     * @param image the new image to be set
     */
    void setImage(QImage image);

    /**
     * @brief calculateGlobalColorHistogram
     * This method calculates the GCH
     * It goes through every pixel of the image, gets the Red, Green and Blue values and updates the corresponding bin
     */
    void calculateGlobalColorHistogram();

    /**
     * @brief printGlobalColorHistogram
     * This method prints the globalColorHistogram in an easy to read format:
     *   RedBinNo GreenBinNo BlueBinNo PixelCount
     */
    void printGlobalColorHistogram();

    /**
     * @brief calculateLocalColorHistogram
     * This method calculates the LCH
     * It separates the image into 16 blocks and calculates for every block the color histogram
     */
    void calculateLocalColorHistogram();

    /**
     * @brief printLocalColorHistogram
     * This method prints the localColorHistogram in an easy to read format:
     *  BlockNo RedBinNo GreenBinNo BlueBinNo PixelCount
     */
    void printLocalColorHistogram();
};

# endif // IMAGE_FEATURE_EXTRACTION_H
