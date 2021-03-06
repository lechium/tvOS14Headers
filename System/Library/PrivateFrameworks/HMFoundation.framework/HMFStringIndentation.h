/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFStringIndentation : HMFObject {

	unsigned long long _width;
	unsigned long long _level;

}

@property (readonly) unsigned long long width;              //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long level;              //@synthesize level=_level - In the implementation block
+(id)indentation;
+(id)indentationWithWidth:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)level;
-(unsigned long long)width;
-(id)initWithWidth:(unsigned long long)arg1 ;
-(id)indentationByLevels:(long long)arg1 ;
@end

