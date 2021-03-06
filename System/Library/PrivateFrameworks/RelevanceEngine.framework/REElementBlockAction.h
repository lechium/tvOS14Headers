/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@interface REElementBlockAction : REElementAction {

	/*^block*/id _action;

}

@property (nonatomic,readonly) id action;              //@synthesize action=_action - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)action;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(void)_performWithContext:(id)arg1 ;
@end

