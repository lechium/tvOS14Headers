/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface PLProgressFollower : NSObject {

	/*^block*/id _progressHandler;
	NSProgress* _sourceProgress;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;                //@synthesize outputProgress=_outputProgress - In the implementation block
@property (readonly) NSProgress * sourceProgress;              //@synthesize sourceProgress=_sourceProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)outputProgress;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(NSProgress *)sourceProgress;
-(void)setOutputProgress:(NSProgress *)arg1 ;
@end
