param (
    [string]$title,
    [string]$source
)

if (-not $title -or -not $source) {
    Write-Host "Usage: fcr.ps1 <title> <source>"
    exit
}

# Process the title: remove whitespaces and convert to lowercase
$processedTitle = $title -replace "\s", ""
$processedTitle = $processedTitle.ToLower()

# Construct the filename
$filename = "$processedTitle`_$source.cpp"

# Create the file in the current directory
Set-Content -Path $filename -Value "// File created by script"

Write-Host "File '$filename' has been created successfully."
