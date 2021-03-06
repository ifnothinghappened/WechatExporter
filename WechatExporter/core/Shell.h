//
//  Shell.h
//  WechatExporter
//
//  Created by Matthew on 2020/9/30.
//  Copyright © 2020 Matthew. All rights reserved.
//
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#ifndef Shell_h
#define Shell_h

// At last, it is function collection of file system actually
class Shell
{
public:
    
	virtual bool existsDirectory(const std::string& path) const = 0;
    virtual bool makeDirectory(const std::string& path) const = 0;
    virtual bool deleteFile(const std::string& path) const = 0;
    virtual bool deleteDirectory(const std::string& path) const = 0;
    virtual bool existsFile(const std::string& path) const = 0;
	virtual bool listSubDirectories(const std::string& path, std::vector<std::string>& subDirectories) const = 0;
    virtual bool copyFile(const std::string& src, const std::string& dest, bool overwrite) const = 0;
    virtual bool moveFile(const std::string& src, const std::string& dest) const = 0;
    // ref: https://blackbeltreview.wordpress.com/2015/01/27/illegal-filename-characters-on-windows-vs-mac-os/
    virtual std::string removeInvalidCharsForFileName(const std::string& fileName) const = 0;
    virtual ~Shell() {}
    
    
};

#endif /* Shell_h */
