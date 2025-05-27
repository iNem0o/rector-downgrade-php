<?php

$contentId = $content->getInternalId() ?? $content->getId() ?? throw new \LogicException('content id is required for ackVersion');
?>
-----
<?php

namespace Rector\Tests\DowngradePhp80\Rector\Expression\DowngradeThrowExprRector\Fixture;


$contentId = $content->getInternalId() ?? $content->getId();
if(null === $contentId) {
    throw new \LogicException('content id is required for ackVersion')
}

?>
