/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVOctetStreamParser.h>

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {

	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(id)initWithFileHandle:(id)arg1 ;
@end
