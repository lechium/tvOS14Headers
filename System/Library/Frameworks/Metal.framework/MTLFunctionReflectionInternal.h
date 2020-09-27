/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLFunctionReflection.h>

@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {

	NSArray* _builtInArguments;
	NSArray* _arguments;
	NSData* _pluginReturnData;

}
-(void)dealloc;
-(id)arguments;
-(id)initWithArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 pluginReturnData:(id)arg4 ;
-(id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)builtInArguments;
-(id)pluginReturnData;
@end
