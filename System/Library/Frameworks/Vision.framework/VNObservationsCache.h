/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMapTable;

@interface VNObservationsCache : NSObject {

	NSMapTable* _observationsCache;

}
-(id)init;
-(id)observationsForKey:(id)arg1 ;
-(void)setObservations:(id)arg1 forKey:(id)arg2 ;
-(id)observationsForRequest:(id)arg1 testedKeyHandler:(/*^block*/id)arg2 ;
@end
