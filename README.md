# Vernam Criptography  Project

### Prerequisites:
 * CMake 3.15.0
 * GCC C++1z
 
#### NOTE: This project runs on UNIX CLI.

### Usage steps:
 #### 1. Clone the repository
   ![Screenshot](images/screen-1.png)

    Your directory structure should look like this:

   ![Screenshot](images/screen-2.png)
 #### 2. Run: cmake CMakeLists.txt
   ![Screenshot](images/screen-3.png)
 #### 3. Run: make
   ![Screenshot](images/screen-4.png)

    CMake and Make actions should generate the executable file as well as a bunch of auxiliary files:

   ![Screenshot](images/screen-4a.png)
 #### 4. Fill in the plaintext: files/data/input.txt
   ![Screenshot](images/screen-4b.png)
 #### 5. Fill in the key: files/data/key.txt
   ![Screenshot](images/screen-5.png)
 #### 6. Run: ./Vernam
   ![Screenshot](images/screen-6.png)
 #### 7. Check file for ciphertext: files/results/ciphertext.txt
   ![Screenshot](images/screen-7.png)
 #### 8. Check file for plaintext: files/results/plaintext.txt
   ![Screenshot](images/screen-8.png)

### Tips:
 1. Restart at step 4 to repeat the experiment.**
 2. Restart at step 3, if you modify the source code with C++11 compatible functionalities.**
 3. If you update the source code using C++1z or C++2x, restart at step 2, after modifying the CXX flags.**

### Notes:
 1. You don't need to cleanup the results directory as the script replaces the files automatically.
 2. This is a sample adaptation for academic purposes only.

#### Copyright Alex Pandi @ 2020
