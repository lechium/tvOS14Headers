/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
+(id)defaultManager;
+(id)defaultHFSFileManager;
-(id)MIMETypeOfPathExtension:(id)arg1 ;
-(id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2 ;
-(id)pathExtensionForMIMEType:(id)arg1 ;
-(id)UTITypeOfMimeType:(id)arg1 ;
-(id)MIMETypeOfPath:(id)arg1 ;
-(id)pathExtensionForUTIType:(id)arg1 ;
-(id)UTITypeOfPath:(id)arg1 ;
-(id)UTITypeOfPathExtension:(id)arg1 ;
@end
