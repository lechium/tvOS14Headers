/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:24:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <JavaScriptCore/JSContext.h>

@interface CRJSContext : JSContext
+(id)sharedContext;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)_createCard:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cardWithTitle:(id)arg1 cardSections:(id)arg2 interaction:(id)arg3 error:(id*)arg4 ;
-(void)evaluateScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

