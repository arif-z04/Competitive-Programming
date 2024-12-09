import requests

# API Endpoint
url = "https://codeforces.com/api/problemset.problems"

# Make the request
response = requests.get(url)

# Parse the response
if response.status_code == 200:
    data = response.json()
    if data["status"] == "OK":
        problems = data["result"]["problems"]
        for problem in problems[:5]:  # Print the first 5 problems
            print(f"Problem: {problem['name']} (Contest ID: {problem['contestId']})")
    else:
        print("Error in response:", data["comment"])
else:
    print("Failed to fetch data. HTTP Status Code:", response.status_code)
