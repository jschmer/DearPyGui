#pragma once

#include "Core/mvWindow.h"

class GLFWwindow;

namespace Marvel {

	class mvLinuxWindow : public mvWindow
	{

	public:

        mvLinuxWindow(unsigned width, unsigned height, bool editor = false, bool error = false, bool doc = false);
		~mvLinuxWindow();

		virtual void prerender() override;
		virtual void postrender() override;
		virtual void cleanup() override;
		virtual void run() override;


	private:
        float             m_clear_color[4] = {0.45f, 0.55f, 0.60f, 1.00f};
		bool              m_running = true;
		bool              m_editor = false;
		bool              m_error = false;
		bool              m_doc = false;
		mvStandardWindow* m_app = nullptr;
		mvStandardWindow* m_appEditor = nullptr;
		mvStandardWindow* m_documentation = nullptr;
		unsigned          m_width;
		unsigned          m_height;
        GLFWwindow*       m_window;

	};

}
