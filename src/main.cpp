#include <stereokit.h>
#include <stereokit_ui.h>
using namespace sk;

mesh_t     cube_mesh;
material_t cube_mat;
pose_t     cube_pose = {{0,0,-0.5f}, quat_identity};

const bool tryHoloGraphicRemoting = false;

int main(void) {
    sk_settings_t settings = {};
	settings.app_name           = "SKNativeTemplate";
	settings.assets_folder      = "Assets";
	settings.display_preference = display_mode_flatscreen;
	if (!sk_init(settings))
		return 1;
    cube_mesh = mesh_gen_sphere(0.25, 20);
    cube_mat  = material_find        (default_id_material_ui);
    if (!tryHoloGraphicRemoting) {
        sk_run([]() {
            ui_handle_begin("Cube", cube_pose, mesh_get_bounds(cube_mesh), false);
            render_add_mesh(cube_mesh, cube_mat, matrix_identity);
            ui_handle_end();
            });
    }

    return 0;
}