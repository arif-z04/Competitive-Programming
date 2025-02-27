import os
import glob

# Specify the directory (change '.' to the desired directory)
directory = "."

# Walk through all subdirectories
for folder, subfolders, files in os.walk(directory):
    for file in glob.glob(os.path.join(folder, "*.exe")):
        try:
            os.remove(file)
            print(f"Deleted: {file}")
        except Exception as e:
            print(f"Error deleting {file}: {e}")

print("Deletion complete.")
