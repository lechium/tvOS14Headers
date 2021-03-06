/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TXRArrayElement : NSObject <NSCopying> {

	NSMutableArray* _faces;

}

@property (readonly) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)faces;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(BOOL)arg5 cubemap:(id)arg6 ;
-(void)setImage:(id)arg1 atFace:(unsigned long long)arg2 ;
@end

