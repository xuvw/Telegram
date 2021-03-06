#import "TGModernConversationEmptyListPlaceholderView.h"

@interface TGChannelAdminLogEmptyFilter : NSObject

@property (nonatomic, strong, readonly) NSString *query;

- (instancetype)initWithQuery:(NSString *)query;

@end

@interface TGChannelAdminLogEmptyView : TGModernConversationEmptyListPlaceholderView

- (instancetype)initWithFilter:(TGChannelAdminLogEmptyFilter *)filter group:(bool)group presentation:(TGPresentation *)presentation;

@end
