/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsXPC.h>

@interface DiskImageParamsRaw_XPC : DiskImageParamsXPC
+(BOOL)supportsSecureCoding;
-(BOOL)isWritableFormat;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
-(unsigned long long)numBlocks;
@end
