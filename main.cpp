
#include <CoreFoundation/CoreFoundation.h>

#include <iostream>
#include <cstdlib>

/*
 * Sets the current working directory to the Resources directory
 * for an app bundle.
 */
void SetCWDToBundleResources()
{
    CFBundleRef mainBundle = CFBundleGetMainBundle();
    CFURLRef resourcesURL = CFBundleCopyResourcesDirectoryURL(mainBundle);
    char path[PATH_MAX];
    if (CFURLGetFileSystemRepresentation(resourcesURL, TRUE, (UInt8 *)path, PATH_MAX))
    {
        chdir(path);        
    }
    CFRelease(resourcesURL);
}

int main()
{
    SetCWDToBundleResources();
    
    char path[PATH_MAX];
    getcwd(path, PATH_MAX);
    std::cout << "PATH: " << path << std::endl;
    
    return 0;
}

