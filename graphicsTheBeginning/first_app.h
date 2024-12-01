#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.h"

namespace lve {
	class FirstApp {
	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();
	private:
		LveWindow lveWindow{ WIDTH,HEIGHT,"HELLO VULCAN!" };
		LvePipeline lvePipeline{ "shaders/simp_shader.vert.spv", "shaders/simp_shader.frag.spv" };
	};
}