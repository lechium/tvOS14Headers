/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSFileWatcherFileHandleInfo : NSObject {

	int fileHandle;
	BOOL closed;

}

@property (readonly) BOOL isDirectory; 
+(id)openFileWithPath:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)close;
-(BOOL)isDirectory;
-(BOOL)verifyAccessByAuditToken:(SCD_Struct_NS0)arg1 ;
@end
