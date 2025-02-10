#include <bits/stdc++.h>
using namespace std;

void increasingTrianglePattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void decresingTrianglePattern(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j <= n; j++)
        {
            cout << " *" << " ";
        }
        cout << endl;
    }
}
void rightTrianglePattern(int n)
{
    //           *
    //         * *
    //       * * *
    //     * * * *
    //   * * * * *

    for (int i = 0; i < n; i++)
    {
        // first half for spaces in decreasing triangle
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // second half for increasing shapes
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void invertedRightTriangle(int n)
{
    //  * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void hillPattern(int n)
{
    //           *
    //         * * *
    //       * * * * *
    //     * * * * * * *
    //   * * * * * * * * *

    // i for rows and j for columns
    for (int i = 0; i < n; i++)
    {
        // first half for decreasing spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // second half for increasing shapes
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // third half for increasing shapes
        // j < i because we don't want to print the last row
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void reverseHillPattern(int n)
{
    // * * * * * * * * * * *
    //   * * * * * * * * *
    //     * * * * * * *
    //       * * * * *
    //         * * *
    //           *

    // i for rows and j for columns
    for (int i = 0; i <= n; i++)
    {
        // first half for decreasing spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // second half for increasing shapes
        // j < i because we don't want to print the last row
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        // third half for increasing shapes

        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void diamondPattern(int n)
{
    //           *
    //         * * *
    //       * * * * *
    //     * * * * * * *
    //   * * * * * * * * *
    //     * * * * * * *
    //       * * * * *
    //         * * *
    //           *

    // upper half of the pattern
    for (int i = 0; i < n; i++)
    {
        // decreasing spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // increasing stars
        // j < i because we don't want to print the last row
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // increasing spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // decreasing stars
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        // decreasing stars
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void pyramid(int n)
{
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *

    for (int i = 1; i <= n; i++)
    {
        // Print spaces (decreasing)
        for (int j = i; j < n; j++)
        {
            cout << " "; // Single space for alignment
        }
        // Print stars (equal to row number)
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // Move to the next line after each row
        cout << endl;
    }
}
void invertedPyramid(int n)
{
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    for (int i = 0; i < n; i++)
    {
        // print spaces (increasing)
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // print stars (decreasing to number of rows)
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void butterflyPattern(int n)
{
    // *                     *
    // * *                 * *
    // * * *             * * *
    // * * * *         * * * *
    // * * * * *     * * * * *
    // * * * * * * * * * * * *
    // * * * * *     * * * * *
    // * * * *         * * * *
    // * * *             * * *
    // * *                 * *
    // *                     *

    // upper half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        // decreasing spaces
        // j < i because we don't want to print the last row
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // decreasing spaces
        // j < i because we don't want to print the last row
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // lower half of the pattern
    for (int i = 0; i < n; i++)
    {
        // decreasing stars
        // j < i because we don't want to print the last row
        for (int j = i; j < n; j++)
        {
            cout << "*" << " ";
        }
        // increasing spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        // increasing spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        // decreasing stars
        // j < i because we don't want to print the last row
        for (int j = i; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void sandGlassPattern(int n)
{
    // * * * * * * * * * * *
    //   * * * * * * * * *
    //     * * * * * * *
    //       * * * * *
    //         * * *
    //           *
    //         * * *
    //       * * * * *
    //     * * * * * * *
    //   * * * * * * * * *
    // * * * * * * * * * * *

    // upper half of the pattern
    for (int i = 0; i < n; i++)
    {
        // increasing spaces
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // decreasing stars
        for (int j = i; j <= n; j++)
        {
            cout << "* ";
        }
        // decreasing stars
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // decreasing spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // increasing stars
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void leftPascaleTriangle(int n)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // upper half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half of the pattern
    for (int i = 0; i < n; i++)
    {
        // decreasing stars
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void rightPascaleTriangle(int n)
{
    // upper half of the pattern
    for (int i = 0; i < n; i++)
    {
        // decreasing space

        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // increasing space
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // decreasing stars
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void doubleHillPattern(int n)
{
    for (int i = 0; i < n; i++)
    {

        // decreasing space
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // increasing stars -1
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        // decreasing space
        for (int j = i; j < n - 1; j++)
        {
            cout << "  ";
        }
        // decreasing space -1
        for (int j = i; j < n - 2; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 1; j <= i; j++)
        {
            if (j == i && i == n - 1)
                continue;

            cout << "* ";
        }
        // increasing stars -1
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void doubleInvertedHillPattern(int n)
{
    for (int i = 0; i < n; i++)
    {

        // first hill
        // increasing spaces for first hill
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // decreasing stars for first hill
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        // decreasing stars -1 for first hill
        for (int j = i; j < n - 1; j++)
        {
            cout << "* ";
        }
        // increasing spaces for first hill
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // second hill
        // increasing spaces -1 for second hill
        for (int j = 0; j < i - 1; j++)
        {
            cout << "  ";
        }
        // decreasing stars for second hill

        for (int j = i; j < n; j++)
        {
            if (i == 0 && j == i)
                continue;
            cout << "* ";
        }
        // decreasing stars -1 for second hill
        for (int j = i; j < n - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void doubleDiamondPattern(int n)
{
    // upper half of the pattern
    for (int i = 0; i <= n; i++)
    {
        // decreasing spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // increasing stars
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        // increasing stars -1
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        // decreasing spaces
        for (int j = i; j < n; j++)
        {
            cout << "  ";
        }
        // decreasing spaces -1
        for (int j = i; j < n - 1; j++)
        {
            cout << "  ";
        }
        // increasing stars - remove merging part
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 && i == n)
                continue;
            cout << "* ";
        }

        // increasing stars -1
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // lower half of the pattern
    for (int i = 0; i < n; i++)
    {
        // increasing spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        // decreasing stars
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        // decreasing stars -1
        for (int j = i; j < n - 1; j++)
        {
            cout << "* ";
        }
        // increasing spaces
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        // increasing spaces -1
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        // decreasing stars - remove merging part
        for (int j = i; j < n-1; j++)
        { 
            cout << "* ";
        }
        // decreasing stars -1
        for (int j = i; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        doubleDiamondPattern(n);
    }
}