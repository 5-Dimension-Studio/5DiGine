/*                         MIT License

                Copyright (c) 2021 5-Dimension-Studio

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#pragma once

//Defining the needed library
#define GLFW_INCLUDE_VULKAN

//Using GLFW as temporary library, will be change in next version of 5DiGine
#include <GLFW/glfw3.h>
#include <string>

namespace fiveDiGine_Window {
	class Window_Screen {
		
		public:
			Window_Screen(int w, int h, std::string name);
			~Window_Screen();

			Window_Screen (const Window_Screen &) =delete;

			bool shouldClose () {
				return glfwWindowShouldClose(window);
			}

		private:
			void initWindow();

			const int width, height;

			std::string windowName;
			GLFWwindow *window;
	};
}
