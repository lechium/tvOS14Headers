/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SACallTree : NSObject {

	NSArray* _rootFrames;

}

@property (readonly) NSArray * rootFrames;              //@synthesize rootFrames=_rootFrames - In the implementation block
-(id)initWithRootFrames:(id)arg1 ;
-(void)enumerateCallTreeFrames:(/*^block*/id)arg1 ;
-(NSArray *)rootFrames;
@end
