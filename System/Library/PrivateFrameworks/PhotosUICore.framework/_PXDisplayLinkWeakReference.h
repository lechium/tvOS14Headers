/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface _PXDisplayLinkWeakReference : NSObject {

	id _object;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(id)object;
-(void)handleDisplayLink:(id)arg1 ;
-(id)initWithObject:(id)arg1 selector:(SEL)arg2 ;
@end
