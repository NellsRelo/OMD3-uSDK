# Orcs Must Die! 3 uSDK
[![Discord](https://img.shields.io/discord/583432386960818227?color=738adb&label=Discord&logo=discord&logoColor=white)](https://discord.gg/kpYnQbnW55) 

_Unofficial SDK for modding Orcs Must Die! 3._

## About

The OMD3 uSDK is an Unreal Editor project built in 4.6.2, aimed at facilitating the process of building mods for the Tower Defense Shooter hybrid game, Orcs Must Die! 3. This project contains Stubbed C++ classes and Dummy Blueprints, all mirroring the game's classes and Blueprints. Most of the included Blueprints relate to core gameplay or environmental meshes for use in custom maps.
 
The game itself is built in a customized version of Unreal Engine, built off of 4.6.x, but the differences in engine _shouldn't_ cause any problems. 

## Useage

### Installation
TODO: Overhaul this once I get a chance
1. Follow the instructions on the [Unreal Engine Download](https://www.unrealengine.com/en-US/download) page
2. Install Unreal Engine 4.6.2
3. Open Unreal Editor and create a new project, titled `OMD`
4. Define the OMD project as a Blueprint Object, and don't let it include Starter Content
5. TODO: (Fiddle with editor settings - some changes will be needed to allow everything to cook properly. Need to reconfirm what settings)
6. Save and close the project
7. Download the Repo into your `UnrealProjects\OMD` folder. The default in Windows is `C:\Users\USERNAME\Documents\Unreal Projects\OMD`
8. Reopen the project, and hit "Compile"
9. You should now be able to play around and create new OMD3 content!

#### Adding Game Mesh and Textures
You may have noticed you can't see any meshes or textures within the uSDK. These will not be included for legal reasons. Instead, you will need to extract the textures and meshes using tools such as UModel and a PSK to FBX mesh exporter for 3DS Max or Blender. These will extract mostly to the correct folders, ready to be moved into your OMD Unreal Project - Meshes that are run through the mesh exporter may end up in a subfolder of their respective `Meshes` folder, `Meshes\FBX`. This will be painstaking, as there are several of these folders scattered throughout, but you will need to move all meshes from `Meshes\FBX` to their parent `Meshes` folder before bringing them into the project.

Once you move your meshes into the correct folders in the OMD Unreal Project, you will be prompted to import each mesh. For this reason, it is recommended only to import what you need, as you need it.

### Blueprint Modding
TODO: Create a wiki page

Content/Mods is where to place folders for BP Mods - I'll upload a sample BP mod at some point. Note that the Unreal ModLoader profile for OMD3 isn't fixed yet, so Unreal ModLoader-based BP mods aren't going to work. That said, BP mods built around custom maps _should_ work.

### Making Custom Maps
TODO: Create a wiki page

`Content/Maps/CustomMaps` is set up for placing custom maps. Standard Practice for folder names appears to be `Maps/MapCollectionName/MapName/MapName.umap`. Note that vanilla level names don't correspond to localized name, but an internal name(e.g. `Scenario_01`). For the sake of having consistency in Map Modding, I think it's probably best to go with `Maps/CustomMaps/MapCollectionOrModAuthorName/MapName/Map.umap`, and to call the map whatever you want

Maps appear to be comprised of multiple UE4 Levels, typically set up as MapName_Castle, MapName_Rain, etc. I've got no clue if Robot literally just made a bunch of distinct maps and somehow pieced them together, if it's a byproduct of some internal tool, or if it's just some UE4 quirk that generates multiple maps based on some kind of organization of assets within the level itself - worth exploring.


## Credits & Acknowledgements
- Special thanks to Robot Entertainment for creating the Orcs Must Die! series
- TimeMaster for organizing the OMD3 Modding Community
- MotoManDan for Showcasing OMD3 mods
- RusselJ and Buckminsterfullerene for making BP Modding easier to understand