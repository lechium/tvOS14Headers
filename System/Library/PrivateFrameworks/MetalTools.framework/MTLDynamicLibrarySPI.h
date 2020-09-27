/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:35:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>
@property (readonly) NSObject*<OS_dispatch_data> binaryData; 
@property (readonly) NSArray * exportedFunctions; 
@property (readonly) NSArray * exportedVariables; 
@property (readonly) NSArray * importedSymbols; 
@property (readonly) NSArray * importedLibraries; 
@property (readonly) NSString * libraryPath; 
@property (readonly) const SCD_Struct_MT14* libraryUUID; 
@required
-(id)formattedDescription:(unsigned long long)arg1;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(NSObject*<OS_dispatch_data>)binaryData;
-(NSArray *)exportedFunctions;
-(NSArray *)exportedVariables;
-(NSString *)libraryPath;
-(const SCD_Struct_MT14*)libraryUUID;

@end
